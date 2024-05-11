import heapq

class Node:
    def __init__(self, state, parent=None, g_cost=0, h_cost=0):
        self.state = state
        self.parent = parent
        self.g_cost = g_cost  # Cost from start node to current node
        self.h_cost = h_cost  # Heuristic cost from current node to goal node

    def __lt__(self, other):
        return (self.g_cost + self.h_cost) < (other.g_cost + other.h_cost)

def astar_search(start, goal, successors, heuristic):
    open_list = []
    closed_set = set()

    start_node = Node(start)
    heapq.heappush(open_list, start_node)

    while open_list:
        current_node = heapq.heappop(open_list)

        if current_node.state == goal:
            path = []
            while current_node:
                path.append(current_node.state)
                current_node = current_node.parent
            return path[::-1]

        closed_set.add(current_node.state)

        for successor in successors(current_node.state):
            successor_node = Node(successor, current_node)
            if successor in closed_set:
                continue
            
            successor_node.g_cost = current_node.g_cost + 1  # Assuming uniform cost for each step
            successor_node.h_cost = heuristic(successor)
            heapq.heappush(open_list, successor_node)

    return None  # If no path is found

# Example heuristic function (Euclidean distance)
def euclidean_distance(state):
    cities = {
        'A': (0, 0),
        'B': (1, 2),
        'C': (3, 1),
        'D': (4, 3),
        'E': (5, 0)
    }
    x1, y1 = cities[state]
    x2, y2 = cities['E']  # Goal city
    return ((x2 - x1) ** 2 + (y2 - y1) ** 2) ** 0.5

# Example successor function
def successors(state):
    successors_dict = {
        'A': ['B', 'C'],
        'B': ['A', 'D'],
        'C': ['A', 'D'],
        'D': ['B', 'C', 'E'],
        'E': ['D']
    }
    return successors_dict.get(state, [])

start_city = 'A'
goal_city = 'E'

path = astar_search(start_city, goal_city, successors, euclidean_distance)
if path:
    print("Optimal Path:", path)
else:
    print("No path found")

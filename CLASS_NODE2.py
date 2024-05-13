import heapq

class Node:
    def __init__(self,state,parent = None,g_cost=0,h_cost =0):
        self.state = state
        self.h_cost = h_cost
        self.parent = parent
        self.g_cost = g_cost

    def __it__(self,other):
        return(self.g_cost + self.h_cost)<(other.g_cost + other.h_cost)

    def astar_search(start,goal,successors,heuristic):
        open_list = []
        closed_set = set()
        start_node = Node(start)
        heapq.heappush(open_list,start_node)

        while open_list:
            current_node = heapq.heappop(open_list)
            if(current_node.state == goal):
                path = []
                while current_node:
                    path.append(current_node.state)
                    current_node = current_node.parent
                return path[::-1]


            closed_set.add(current_node.state)
            for sucessor in successors(node.state):
                if successor not in explored:

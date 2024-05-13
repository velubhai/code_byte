class Node:
    def __init__(self,state,parent=None):
        self.state = state
        self.parent = parent

    def __eq__(self,other):
        return self.state == other.state

    def __hash__(self):
        return hash(self.state)
                    
def best_first_search(start,goal,successor,heuristic):
    frontier = [(heuristic(start), Node(start))]
    explored = set()

    while frontier:
        frontier.sort(key = lambda x: x[0])
        node = frontier.pop(0)[1]

        if(node.state==goal):
            path = []
            while node:
                path.append(node.state)
                node = node.parent
            return path[::-1]
        explored.add(node.state)

        for successor in successors(node.state):
            if successor not in explored:
                frontier.append((heuristic(successor),Node(successor,node)))
    return None                                    
                
        
                    

def edclidean_distance(state):
    cities = {
                'A':(0,0),
                'B':(1,2),
                'C':(3,1),
                'D':(4,3),
                'E':(5,0)
                }
    x1, y1 = cities[state]
    x2, y2 = cities['E']
    return((x2 - x1)**2 + (y2 - y1)**2)**0.5


def successors(state):
    succesors_dict = {
                        'A': ['B','C'],
                        'B':['A''D'],
                        'C':['A','D'],
                        'D':['B','C','E'],
                        'E':['D']
                        }
    return succesors_dict.get(state,[])
start_city = 'A'
goal_city = 'C'

path = best_first_search(start_city, goal_city, successors, edclidean_distance)

if path:
    print("Optimal Path:", path)
else:
    print("No path found")

    
                    

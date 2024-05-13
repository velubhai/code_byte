import math
class state():
    def __init__(self,cannibalLeft,missionaryLeft,boat,cannibalRight,missionaryRight):
        self.cannibalLeft = cannibalLeft

    def is_good(self):
        if(self.cannibalLeft == 0 and self.missionaryLeft == 0):
            return True

        else:
            return False

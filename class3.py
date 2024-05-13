class symbol:
    def __init__(self,name):
        self.name=name

    def __repr__(self):
        return self.name

class And:
    def __init__(self,*propositions):
        self.propositions = propositions

    def __repr__(self):
        return "^".join([f"({prop})" for prop in self.propositions])


class Or:
    def __init__(self,*propositions):
        self.propositions = propositions

    def __repr__(self):
        return "v".join([f"({prop})" for prop in self.propositions])

class Not:
    def __init__(self,*propositions):
        self.propositions = propositions

    def __repr__(self):
        return "!=".join([f"({prop})" for prop in self.propositions])

        


hagrid = symbol("hagrid")
dumbledore = symbol("dumbledore")
knowledge = And(hagrid,dumbledore)
knowledge2 = Or(hagrid,And(hagrid,dumbledore))
knowledge3 = Not(hagrid,And(hagrid,dumbledore))


print(knowledge)
print(knowledge2)
print(knowledge3)
            
        

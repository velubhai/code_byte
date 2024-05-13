import random
def computer_input():
    return random.choice(["Where would you be if you were standing on the Spanish Steps?","Which language has the more native speakers: English or Spanish?","What is the most common surname in the United States?","What disease commonly spread on pirate ships?","Who was the Ancient Greek God of the Sun?","What was the name of the crime boss who was head of the feared Chicago Outfit?","What year was the United Nations established?","Who has won the most total Academy Awards?","What artist has the most streams on Spotify?","How many minutes are in a full week?"])



def user_input():
    userinput=input("enter your answer:").lower()
    return userinput


def win(computer_input, user_input):
    if (computer_input=="Where would you be if you were standing on the Spanish Steps?"and user_input==" Rome")or(computer_input=="Which language has the more native speakers: English or Spanish?" and user_input=="Spanish")or(computer_input=="What is the most common surname in the United States?"and user_input=="Smith")or(computer_input=="What disease commonly spread on pirate ships?"and user_input=="Scurvy")or(computer_input=="Who was the Ancient Greek God of the Sun?"and user_input==" Apollo") or(computer_input=="What was the name of the crime boss who was head of the feared Chicago Outfit?"and user_input==" Al Capone")or(computer_input=="What year was the United Nations established?"and user_input==" 1945")or(computer_input=="Who has won the most total Academy Awards?"and user_input==" Walt Disney")or (computer_input=="What artist has the most streams on Spotify?"and user_input==" Drake")or (computer_input=="How many minutes are in a full week?"and user_input==" 10,080"):
        print("you are win")
    else:
        print("better luck next time")
        
while True:
    computer =computer_input()
    user =user_input()
    win(computer,user)

    
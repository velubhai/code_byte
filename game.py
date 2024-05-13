import random
def computer_input():
    return random.choice (["rock","paper","scissor"])



def user_input():
    userinput=input("please choose any one random for rock paper scissor:").lower()
    return userinput


def win(computer_input, user_input):
    if (computer_input=="rock" and user_input=="paper") or (computer_input=="scissor" and user_input=="rock") or (computer_input=="paper" and user_input=="scissor"):
        print("you are win the match")

    elif (computer_input == user_input) :
        print("Tie the match")
    else:
        print("better luck next time")
        
while True:
    computer =computer_input()
    user =user_input()
    win(computer,user)

    
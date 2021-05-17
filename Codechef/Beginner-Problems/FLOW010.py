# cook your dish here
test=int(input())
for i in range(0,test):
    letter=input();
    if(letter=='b' or letter=='B'):
        print("BattleShip")
    elif(letter=='c' or letter=='C'):
        print("Cruiser")
    elif(letter=='f' or letter=='F'):
        print("Frigate")
    else:
        print("Destroyer")

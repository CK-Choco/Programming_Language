import turtle
house= turtle.Turtle()
house.pensize(3)
house.shape('turtle')



#左邊房子
for a in range(1):
    house.penup()
    house.goto(-50,0)
    house.pendown()
    house.color('green')
    for b in range(2):
        house.forward(100)
        house.left(120)
    house.forward(100)
    house.left(30)
    house.pendown()
    house.color('black')
    for c in range(5):
        house.forward(100)
        house.left(90)
    house.forward(25)
    house.color('red')
    house.left(90)
    house.forward(50)
    house.right(90)
    house.forward(50)
    house.right(90)
    house.forward(50)
house.penup()
house.home()
house.pendown()
#右邊房子
for d in range(1):
    house.penup()
    house.goto(100,0)
    house.pendown()
    house.color ('green')
    for b in range(2):
        house.forward(100)
        house.left(120)
    house.forward(100)
    house.left(30)
    house.pendown()
    house.color('black')
    for c in range(5):
        house.forward(100)
        house.left(90)
    house.color('blue')
    house.forward(25)
    house.left(90)
    house.forward(75)
    house.right(90)
    house.forward(50)
    house.right(90)
    house.forward(75)
house.right(90)
house.color('black')
house.forward(75)
house.right(180) 

turtle.done()    
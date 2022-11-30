import turtle
shelly= turtle.Turtle()
colors=['red','blue','green','pink','yellow','purple']
turtle.bgcolor('black') 
shelly.pensize(3)
shelly.speed(30)
for a in range(6):
    for i in range(6):
        shelly.color(colors[i])
        for n in range(4):
            shelly.forward(20)
            shelly.left(90)
        shelly.penup()
        shelly.forward(30)
        shelly.pendown()
    shelly.hideturtle()
    shelly.penup()
    shelly.goto(0,-25*(a+1))
    shelly.pendown()

turtle.done()
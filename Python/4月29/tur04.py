import turtle
shelly=turtle.Turtle()
shelly.begin_fill()
shelly.color('red')
for i in range(4):
    shelly.forward(100)
    shelly.left(90)
shelly.end_fill()
shelly.hideturtle()
shelly.begin_fill()
shelly.color('green')
for i in range(4):
    shelly.forward(100)
    shelly.left(90)
shelly.end_fill()
shelly.hideturtle()
shelly.begin_fill()
shelly.color('blue')
for i in range(4):
    shelly.forward(100)
    shelly.left(90)
shelly.end_fill()
shelly.hideturtle()




turtle.done()
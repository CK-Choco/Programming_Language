import turtle
shelly=turtle.Turtle()
turtle.bgcolor('black')
colors=['red','yellow','blue','orange','green','purple']
shelly.speed(40)
shelly.hideturtle()
for n in range(6):
    for i in range(4):
        shelly.color(colors[i])
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
    shelly.right(60)
for g in range(3):
    for h in range(4):
        shelly.color('pink')
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
        shelly.right(60)
        shelly.forward(100)
    shelly.right(60)


turtle.done()
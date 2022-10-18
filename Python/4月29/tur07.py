import turtle
shelly=turtle.Turtle()
turtle.bgcolor('black')
colors=['red','yellow','blue','orange','green','purple']
shelly.speed(60)

for n in range(36):
    for i in range(6):
        shelly.color(colors[i])
        shelly.forward(100)
        shelly.left(60)
    shelly.right(10)


turtle.done()
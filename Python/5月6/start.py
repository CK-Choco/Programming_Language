import turtle
star=turtle.Turtle()

star.penup()
for a in range(40,-1-1):
    star.stamp()
    star.left(a)
    star.forward(20)

    turtle.done()
import turtle
shelly= turtle.Turtle()
shelly.speed(30)
for a in range(36):
        shelly.penup()
        shelly.forward(200)
        for n in range(6):
            shelly.color('blue')
            shelly.pendown()
            shelly.circle(5)
            shelly.penup()
            shelly.backward(20)
        shelly.goto(0,0)
        shelly.left(10)
shelly.hideturtle()
    
turtle.done()
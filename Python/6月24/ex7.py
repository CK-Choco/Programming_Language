import turtle
from typing import SupportsFloat
shelly=turtle.Turtle()
shelly.shape('turtle')
shelly.color('aqua')
shelly.speed(20)
shelly.width(3)
#製作雨滴
shelly.penup()
shelly.goto(-100,85)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)

shelly.penup()
shelly.goto(-50,85)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)

shelly.penup()
shelly.goto(0,85)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)

shelly.penup()
shelly.goto(-75,35)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)

shelly.penup()
shelly.goto(-25,35)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)
#製作地面
shelly.penup()
shelly.goto(-140,-125)
shelly.pendown()
shelly.color('peru')
shelly.forward(300)
#製作樹幹
shelly.penup()
shelly.goto(100,-125)
shelly.pendown()
shelly.color('saddlebrown')
shelly.left(90)
shelly.forward(200)
#製作樹葉
shelly.color('lime')
shelly.penup()
shelly.goto(100,85)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(50)
        shelly.left(120)
    shelly.right(60)
#製作分支1
shelly.penup()
shelly.goto(100,-55)
shelly.pendown()
shelly.color('saddlebrown')
shelly.left(75)
shelly.forward(65)
#製作樹葉
shelly.color('lime')
for n in range(6):
    for i in range(3):
        shelly.forward(30)
        shelly.left(120)
    shelly.right(60)
#製作分支2
shelly.penup()
shelly.goto(100,15)
shelly.pendown()
shelly.color('saddlebrown')
shelly.forward(65)
#製作樹葉
shelly.color('lime')
for n in range(6):
    for i in range(3):
        shelly.forward(30)
        shelly.left(120)
    shelly.right(60)
#製作前輪
shelly.color('gold')
shelly.penup()
shelly.goto(-90,-105)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)
#製作支架
shelly.color('orange')
shelly.right(105)
shelly.forward(50)
shelly.right(120)
shelly.forward(50)
for n in range(2):
    for i in range(3):
        shelly.left(120)
        shelly.forward(50)
    shelly.right(60)
shelly.right(60)
shelly.forward(50)
shelly.right(90)
shelly.color('red')
shelly.forward(25)
shelly.penup()
shelly.goto(-15,-60)
shelly.pendown()
shelly.forward(25)
shelly.left(150)
shelly.forward(20)
#製作後輪
shelly.color('gold')
shelly.penup()
shelly.goto(10,-105)
shelly.pendown()
for n in range(6):
    for i in range(3):
        shelly.forward(20)
        shelly.left(120)
    shelly.right(60)

shelly.penup()
shelly.goto(-110,-125)
shelly.color('black')
shelly.right(180)
turtle.done()

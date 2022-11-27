import turtle

turtle.bgcolor("black")

def curve():
    for i in (0,200):
        turtle.right(1)
        turtle.forward(1)
turtle.speed(10)
turtle.color("red","pink")

turtle.begin_fill()
#left side of heart:
turtle.left(140)
turtle.forward(111.65)
curve()

#right side of heart:

turtle.left(120)
turtle.forward(111.65)
curve()
turtle.end_fill()
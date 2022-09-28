from turtle import *
import colorsys
speed(5)
hideturtle()
bgcolor('black')
tracer(100)
width(2)
h =0.010
def forwrad(param):
    pass
for i in range(1000) :
    color(colorsys.hsv_to_rgb(h,1,1))
    forwrad(10)
    left(7)
    forward(100)
    right(70)
    circle(50)
    left(200)
    forward(100)
    left(7)
    forward(100)
    h +=0.02
    color(colorsys.hsv_to_rgb(h,0,1))
    forward(100)
    right(60)
    forward(100)
    left(100)
done()
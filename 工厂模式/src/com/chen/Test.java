package com.chen;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public class Test {
    public static void main(String[] args) {
        ShapeFactory shapeFactory = new ShapeFactory();

        Shape shape1 = shapeFactory.getShape("Circle");

        shape1.draw();

        Shape shape2 = shapeFactory.getShape("Rectangle");

        shape2.draw();

        Shape shape3 = shapeFactory.getShape("Square");

        shape3.draw();
    }

}

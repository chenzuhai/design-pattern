package main;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public abstract class ShapeDecorator implements Shape {
    protected  Shape decoratorShape;

    public ShapeDecorator(Shape decoratorShape){
        this.decoratorShape = decoratorShape;
    }

    public void draw(){
        decoratorShape.draw();
    }
}

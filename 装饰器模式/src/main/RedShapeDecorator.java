package main;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public class RedShapeDecorator extends ShapeDecorator {
    public RedShapeDecorator(Shape decoratorShape){
        super(decoratorShape);
    }

    @Override
    public void draw() {
        decoratorShape.draw();
        setRedBorder(decoratorShape);

    }
    private void setRedBorder(Shape decoratorShape){
        System.out.println("Border Color: Red");
    }
}

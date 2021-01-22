package com.chen;

import com.chen.impl.Circle;
import com.chen.impl.Square;
import com.chen.impl.Rectangle;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public class ShapeFactory {
    public Shape getShape(String shapeType){
        if(shapeType==null){
            return null;
        }

        if(shapeType.equalsIgnoreCase("CIRCLE")){
            return new Circle();
        } else if(shapeType.equalsIgnoreCase("Rectangle")){
            return new Rectangle();
        } else if(shapeType.equalsIgnoreCase("SQUARE")){
            return new Square();
        }
        return null;
    }
}

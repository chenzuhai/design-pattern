package com.chen.main.interfac;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public abstract class AbstractFactory {
    public abstract Color getColor(String color);
    public abstract Shape getShape(String shape);
}

package com.chen.main.impl;


import com.chen.main.interfac.Shape;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public class Circle implements Shape {
    @Override
    public void draw() {
        System.out.println("Inside Circle::draw() method.");
    }
}

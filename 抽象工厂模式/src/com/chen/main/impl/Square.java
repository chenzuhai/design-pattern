package com.chen.main.impl;

import com.chen.main.interfac.Shape;

/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public class Square implements Shape {
    @Override
    public void draw() {
        System.out.println("Inside Square::draw() method.");
    }
}

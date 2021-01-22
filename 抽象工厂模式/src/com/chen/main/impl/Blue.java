package com.chen.main.impl;
import com.chen.main.interfac.Color;
/**
 * @author Zuhai Chen
 * @version 1.0
 * @date 2020/6/16
 */
public class Blue implements Color {

    @Override
    public void fill() {
        System.out.println("Inside Blue::fill() method.");
    }
}

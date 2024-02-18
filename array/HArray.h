//
// Created by hry on 2024/2/16.
//

#ifndef CONTAINER_HARRAY_H
#define CONTAINER_HARRAY_H


class HArray {

private:
struct Arr{
    int *pBase; //存储的是数组第一个元素的地址
    int len; //数组所能容纳的最大元素的个数
    int cnt; //当前数组有效元素的个数
    int increment; //自动增长因子
};

public:
    //初始化
    void init();

    //打印显示
    void display();

    //追加
    void append(Object obj);

    //插入
    void insert(int index, Object obj);

    //删除
    void delete(int index);

    //是否满
    bool isFull();

    //排序
    void sort();

    //倒置
    void reverse();

    //将指定的元素添加到此列表的尾部
    void add(Object obj);

    //将指定元素插入此列表中的指定位置
    void add(int index, Object obj);

    //按照指定collection的迭代器所返回的元素顺序，将该collection中的所有元素添加到此列表的尾部
    void addAll(Collection<Object> collection);

    //从指定的位置开始，将指定的collection中的所有元素插入到此列表中
    void addAll(int index, Collection<Object> collection);

    //移除此列表中的所有元素
    void clear();

    //返回此ArrayList实例的浅表副本
    ArrayList<Object> clone();

    //如果此列表中包含指定的元素，则返回true
    bool contains(Object obj);

    //如有必要，增加此ArrayList实例的容量，以确保它至少能够容纳最小容量参数所指定的元素数
    void ensureCapacity(int minCapacity);

    //返回此列表中指定位置上的元素
    Object get(int index);

    //返回此列表中首次出现的指定元素的索引，或如果此列表不包含元素，则返回-1
    int indexOf(Object obj);

    //如果此列表中没有元素，则返回true
    bool isEmpty();

    //返回此列表中最后一次出现的指定元素的索引，或如果此列表不包含索引，则返回-1
    int lastIndexOf(Object obj);

    //移除此列表中指定位置的元素
    void remove(int index);

    //移除此列表中首次出现的指定元素（如果存在）
    void remove(Object obj);

    //移除列表中索引在fromIndex（包括）和toIndex（不包括）之间的所有元素
    void removeRange(int fromIndex, int toIndex);

    //用指定的元素替代此列表中指定位置上的元素
    void set(int index, Object obj);

    //返回此列表中的元素数
    int size();

    //按适当顺序（从第一个到最后一个元素）返回包含此列表中的所有元素的数组
    Object[] toArray();

    //按适当顺序（从第一个到最后一个元素）返回包含此列表中的所有元素的数组，返回数组的运行时类型是指定数组的运行时类型
    T[] toArray(T[] a);

    //将此ArrayList实例的容量调整为列表的当前大小
    void trimToSize();
};


#endif //CONTAINER_HARRAY_H

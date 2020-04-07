//
//  main.m
//  Lab8
//
//  Created by Carlos andres Diaz bravo  on 2020-04-06.
//  Copyright © 2020 Carlos andres Diaz bravo . All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSInteger,size){
    small,
    medium,
    large
};

typedef NSMutableArray(float,toppings){
    ham,pinnaple,cheese
};

@interface Kitchen : NSObject



@property (nonatomic) enum size ;
@property (nonatomic) NSArray* toppings;

- (instancetype)makePizzaWithSize:(NSString*)size toppings:(NSArray *)toppings;


@end

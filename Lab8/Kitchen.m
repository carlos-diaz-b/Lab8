//
//  main.m
//  Lab8
//
//  Created by Carlos andres Diaz bravo  on 2020-04-06.
//  Copyright © 2020 Carlos andres Diaz bravo . All rights reserved.
//
#import "Kitchen.h"


@implementation Kitchen
    
- (instancetype)makePizzaWithSize:(NSString*)size toppings:(NSArray *)toppings{
   self = [super init];
   if (self) {
       _size = large;
       _toppings = toppings;
   }
   return self;
}




@end

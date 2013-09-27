//
//  Player.m
//  Ratings
//
//  Created by Tanvi Jindal on 9/26/13.
//  Copyright (c) 2013 Tanvi. All rights reserved.
//

#import "Player.h"

@implementation Player

- (id) initWithName:(NSString *)name Game:(NSString *)game Rating:(int)rating {
    if (self = [super init]) {
        self.name =name;
        self.game = game;
        self.rating = rating;
    }
    return self;
}

@end

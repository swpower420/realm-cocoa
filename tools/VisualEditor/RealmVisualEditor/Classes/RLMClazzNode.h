//
//  RLMClazzNode.h
//  RealmVisualEditor
//
//  Created by Jesper Zuschlag on 20/05/14.
//  Copyright (c) 2014 Realm inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "RLMObjectNode.h"
#import "RLMArrayNode.h"

@interface RLMClazzNode : RLMObjectNode

- (RLMArrayNode *)displayChildArray:(RLMArray *)array fromPropertyWithName:(NSString *)name index:(NSUInteger)index;

- (void)removeDisplayingOfArrayAtIndex:(NSUInteger)index;

- (void)removeDisplayingOfArrayFromObjectAtIndex:(NSUInteger)index;

@end
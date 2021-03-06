/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface BMRuleMO : NSManagedObject

@property (assign,nonatomic) double confidence; 
@property (assign,nonatomic) double support; 
@property (nonatomic,retain) NSSet * antecedent; 
@property (nonatomic,retain) NSSet * consequent; 
+(id)fetchRequest;
@end


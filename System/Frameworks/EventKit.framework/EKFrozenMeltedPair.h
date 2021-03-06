/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol EKFrozenMeltedPair <NSObject>
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@required
+(Class)frozenClass;
+(Class)meltedClass;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)initWithObject:(id)arg1;
-(id)valueForKey:(id)arg1;
-(NSString *)uniqueIdentifier;
-(id)changeSet;
-(BOOL)isFrozen;
-(BOOL)isPartialObject;
-(Class)frozenClass;
-(id)meltedObjectInStore:(id)arg1;
-(id)frozenObject;
-(id)existingMeltedObject;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isCompletelyEqual:(id)arg1;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
-(NSString *)semanticIdentifier;

@end


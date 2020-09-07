/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHLWorkoutType : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * swimmingLocationType; 
@property (nonatomic,copy) NSString * workoutCategory; 
@property (nonatomic,copy) NSString * workoutLocationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutType;
+(id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)workoutLocationType;
-(void)setWorkoutLocationType:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setSwimmingLocationType:(NSString *)arg1 ;
-(NSString *)swimmingLocationType;
-(NSString *)workoutCategory;
-(void)setWorkoutCategory:(NSString *)arg1 ;
@end

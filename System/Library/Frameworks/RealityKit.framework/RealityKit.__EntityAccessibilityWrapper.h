/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RealityKit/RealityKit-Structs.h>
@class _TtC10RealityKit28__EntityAccessibilityWrapper, NSString;

@interface RealityKit.__EntityAccessibilityWrapper : NSObject {

	 entity;
	 rootEntityWrapper;

}

@property (readonly,nonatomic) _TtC10RealityKit28__EntityAccessibilityWrapper * rootEntityWrapper; 
@property (readonly,nonatomic) unsigned long long identifier; 
@property (readonly,nonatomic) BOOL isEntityRoot; 
@property (readonly,nonatomic) BOOL isEntityAccessible; 
@property (readonly,nonatomic) NSString * entityLabel; 
@property (readonly,nonatomic) NSString * entityDescription; 
@property (readonly,nonatomic) BOOL isEntityActive; 
-(id)init;
-(unsigned long long)identifier;
-(NSString *)entityDescription;
-(_TtC10RealityKit28__EntityAccessibilityWrapper *)rootEntityWrapper;
-(CGRect)calculateScreenBoundingRectIn:(id)arg1 ;
-(BOOL)isEntityRoot;
-(BOOL)isEntityAccessible;
-(NSString *)entityLabel;
-(BOOL)isEntityActive;
@end


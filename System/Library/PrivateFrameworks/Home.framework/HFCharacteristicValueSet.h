/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface HFCharacteristicValueSet : NSObject {

	NSMutableSet* _allCharacteristics;
	NSMutableDictionary* _valuesByCharacteristicUUID;

}

@property (nonatomic,readonly) NSSet * allCharacteristics;              //@synthesize allCharacteristics=_allCharacteristics - In the implementation block
-(id)init;
-(NSSet *)allCharacteristics;
-(void)setValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(id)valueForCharacteristic:(id)arg1 ;
-(void)removeValueForCharacteristic:(id)arg1 ;
@end


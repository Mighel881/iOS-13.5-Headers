/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDFieldWrapper.h>

@class NSArray;

@interface HMDArrayWrapper : HMDFieldWrapper {

	NSArray* _field;
	/*^block*/id _objectCreator;

}

@property (nonatomic,retain) NSArray * field;              //@synthesize field=_field - In the implementation block
@property (nonatomic,copy) id objectCreator;               //@synthesize objectCreator=_objectCreator - In the implementation block
+(id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 objectCreator:(/*^block*/id)arg3 ;
-(NSArray *)field;
-(void)setField:(NSArray *)arg1 ;
-(void)setObjectCreator:(id)arg1 ;
-(id)objectCreator;
@end

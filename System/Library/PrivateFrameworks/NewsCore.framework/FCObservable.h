/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FCObservable : NSObject {

	id _value;
	NSMutableArray* _observers;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) unsigned long long token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) id value;                                //@synthesize value=_value - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)token;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setToken:(unsigned long long)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(id)initWithValue:(id)arg1 ;
-(id)observe:(/*^block*/id)arg1 ;
-(void)next:(id)arg1 ;
-(void)quietNext:(id)arg1 ;
@end


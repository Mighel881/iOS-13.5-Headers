/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRRegistryQueryCompletionBlockEntry : NSObject {

	/*^block*/id _block;
	unsigned long long _updateCounter;

}

@property (nonatomic,copy) id block;                                        //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) unsigned long long updateCounter;              //@synthesize updateCounter=_updateCounter - In the implementation block
-(id)block;
-(void)setBlock:(id)arg1 ;
-(unsigned long long)updateCounter;
-(void)setUpdateCounter:(unsigned long long)arg1 ;
-(id)initWithUpdateCounter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end


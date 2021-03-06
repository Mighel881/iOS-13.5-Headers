/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKEntityValueProviding;
@interface _SKUIDynamicGridEntityValueProviderValue : NSObject {

	id<IKEntityValueProviding> _entityValueProvider;
	long long _sectionIndex;

}

@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                                      //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(long long)sectionIndex;
-(void)setSectionIndex:(long long)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
@end


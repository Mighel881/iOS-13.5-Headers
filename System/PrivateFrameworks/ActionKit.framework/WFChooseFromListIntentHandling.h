/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFChooseFromListIntentHandling <NSObject>
@optional
-(void)confirmChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultChosenItemsForChooseFromList:(id)arg1;

@required
-(void)handleChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

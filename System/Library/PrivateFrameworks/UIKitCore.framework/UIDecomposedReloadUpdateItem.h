/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIUpdateItem.h>

@interface UIDecomposedReloadUpdateItem : UIUpdateItem {

	UIDecomposedReloadUpdateItem* _pairedItem;

}

@property (assign,nonatomic,__weak) UIDecomposedReloadUpdateItem * pairedItem;              //@synthesize pairedItem=_pairedItem - In the implementation block
-(void)setPairedItem:(UIDecomposedReloadUpdateItem *)arg1 ;
-(BOOL)isDecomposedFromReload;
-(UIDecomposedReloadUpdateItem *)pairedItem;
@end

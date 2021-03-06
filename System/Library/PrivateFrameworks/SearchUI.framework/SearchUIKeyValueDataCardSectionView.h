/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKKeyValueView;

@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKKeyValueView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(int)separatorStyleForCardSection:(id)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(id)convertSFKeyValueData:(id)arg1 ;
@end


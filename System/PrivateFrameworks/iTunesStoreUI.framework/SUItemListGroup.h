/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, SUItem, NSString;

@interface SUItemListGroup : NSObject {

	NSMutableArray* _items;
	SUItem* _separatorItem;

}

@property (nonatomic,readonly) NSString * indexBarTitle; 
@property (nonatomic,retain) NSMutableArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) SUItem * separatorItem;                  //@synthesize separatorItem=_separatorItem - In the implementation block
-(void)dealloc;
-(id)description;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)indexBarTitle;
-(SUItem *)separatorItem;
-(void)setSeparatorItem:(SUItem *)arg1 ;
@end


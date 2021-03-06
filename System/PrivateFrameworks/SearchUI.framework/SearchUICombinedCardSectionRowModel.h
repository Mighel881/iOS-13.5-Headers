/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIRowModel.h>

@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel {

	NSArray* _cardSectionRowModels;

}

@property (nonatomic,retain) NSArray * cardSectionRowModels;              //@synthesize cardSectionRowModels=_cardSectionRowModels - In the implementation block
-(int)separatorStyle;
-(id)nextCard;
-(BOOL)isDraggable;
-(id)punchouts;
-(id)initWithResult:(id)arg1 cardSectionRowModels:(id)arg2 ;
-(Class)cellViewClass;
-(void)setCardSectionRowModels:(NSArray *)arg1 ;
-(NSArray *)cardSectionRowModels;
-(id)dragURL;
-(id)firstRowModel;
-(id)dragTitle;
-(id)dragText;
-(id)dragSubtitle;
-(BOOL)isTappable;
@end


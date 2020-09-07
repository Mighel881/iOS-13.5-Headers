/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsMeCardObserver.h>

@class MapsSuggestionsShortcutManager, MapsSuggestionsMeCard, NSString;

@interface MapsSuggestionsCorrectedMapItemProvider : NSObject <MapsSuggestionsMeCardObserver> {

	MapsSuggestionsShortcutManager* _shortcutManager;
	MapsSuggestionsMeCard* _meCard;
	/*^block*/id _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)dealloc;
-(NSString *)uniqueName;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)meCardReader:(id)arg1 didUpdateMeCard:(id)arg2 ;
-(id)mapItemFormShortcutForCNIdentifier:(id)arg1 ;
@end

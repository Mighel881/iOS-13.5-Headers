/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@class NSMutableDictionary;

@interface AXMLexiconManager : NSObject {

	NSMutableDictionary* _cachedLexicons;

}
-(id)init;
-(LXLexiconRef)_lexiconForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(BOOL)lexiconExistsForLocale:(id)arg1 diagnostics:(id)arg2 ;
-(BOOL)textExistsInLexicon:(id)arg1 withLocale:(id)arg2 diagnostics:(id)arg3 ;
-(void*)_opaqueLexiconForLocale:(id)arg1 diagnostics:(id)arg2 ;
@end


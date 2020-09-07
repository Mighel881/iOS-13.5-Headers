/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHTMLElement.h>

@class REHTMLElement, NSArray;

@interface REHTMLParentElement : REHTMLElement {

	REHTMLElement* _parent;
	NSArray* _children;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(id)classes;
-(id)addChildren:(id)arg1 ;
-(id)_encodedData;
-(id)elementBySettingClasses:(id)arg1 ;
-(id)elementBySettingAtttibutes:(id)arg1 ;
-(id)initWithParents:(id)arg1 children:(id)arg2 ;
@end

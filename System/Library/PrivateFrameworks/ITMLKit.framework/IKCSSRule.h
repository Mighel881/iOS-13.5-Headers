/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKCSSSelectorList, IKCSSDeclarationList, IKCSSMediaQuery;

@interface IKCSSRule : NSObject <NSCopying> {

	IKCSSSelectorList* _selectorList;
	IKCSSDeclarationList* _declarationList;

}

@property (nonatomic,retain) IKCSSSelectorList * selectorList;                    //@synthesize selectorList=_selectorList - In the implementation block
@property (nonatomic,retain) IKCSSDeclarationList * declarationList;              //@synthesize declarationList=_declarationList - In the implementation block
@property (nonatomic,readonly) IKCSSMediaQuery * mediaQuery; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IKCSSMediaQuery *)mediaQuery;
-(IKCSSSelectorList *)selectorList;
-(IKCSSDeclarationList *)declarationList;
-(void)setDeclarationList:(IKCSSDeclarationList *)arg1 ;
-(void)setSelectorList:(IKCSSSelectorList *)arg1 ;
@end


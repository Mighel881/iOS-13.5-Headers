/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(id)init;
-(id)description;
-(id)firstChild;
-(unsigned)tokenIndex;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)setFirstChild:(id)arg1 ;
-(void)setSibling:(id)arg1 ;
-(id)sibling;
@end


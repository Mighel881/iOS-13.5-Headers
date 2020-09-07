/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSWPColumn, TSWPShapeLayout;

@interface TSWPInteriorCookie : NSObject {

	TSWPColumn* _column;
	TSWPShapeLayout* _shapeLayout;

}

@property (assign,nonatomic) TSWPColumn * column;                   //@synthesize column=_column - In the implementation block
@property (assign,nonatomic) TSWPShapeLayout * layout;              //@synthesize shapeLayout=_shapeLayout - In the implementation block
-(TSWPShapeLayout *)layout;
-(void)setLayout:(TSWPShapeLayout *)arg1 ;
-(TSWPColumn *)column;
-(void)setColumn:(TSWPColumn *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, EDString;

@interface EDTableColumn : NSObject {

	EDResources* mResources;
	unsigned long long mHeaderRowDxfIndex;
	unsigned long long mTotalsRowDxfIndex;
	unsigned long long mDataAreaDxfIndex;
	EDString* mName;
	EDString* mUniqueName;
	EDString* mTotalsRowLabel;

}
+(id)tableColumnWithResources:(id)arg1 ;
-(id)description;
-(id)name;
-(void)setName:(id)arg1 ;
-(id)uniqueName;
-(void)setUniqueName:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)headerRowDxf;
-(void)setHeaderRowDxf:(id)arg1 ;
-(id)totalsRowDxf;
-(void)setTotalsRowDxf:(id)arg1 ;
-(id)dataAreaDxf;
-(void)setDataAreaDxf:(id)arg1 ;
-(id)totalsRowLabel;
-(void)setTotalsRowLabel:(id)arg1 ;
-(unsigned long long)headerRowDxfIndex;
-(void)setHeaderRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalsRowDxfIndex;
-(void)setTotalsRowDxfIndex:(unsigned long long)arg1 ;
-(unsigned long long)dataAreaDxfIndex;
-(void)setDataAreaDxfIndex:(unsigned long long)arg1 ;
@end

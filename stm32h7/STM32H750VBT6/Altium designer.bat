rd/s/q History 		
::允许删除历史文件
::rd/s/q HISTORY
rd/s/q __Previews	
::允许删除预览文件
::rd/s/q __PREVIEWS
del *.LOG /s	
::允许删除日志文件
::del *.log /s
::del *.PrjPcb /s   
::不允许删除项目工程
::del *.PRJPCB /s 
::del *.PcbDoc /s	
::不允许删除PCB文件
::del *.PCBDOC /s
::del *.SchLib /s	
::不允许删除原理图库文件
::del *.SCHLLB /s
::del *.LIB /s		
::不允许删除库文件
::del *.Lib /s
::del *.SchDoc /s	
::不允许删除原理图文件
::del *.SCHDOC /s
::del *.PcbLib /s	
::不允许删除PCB库文件
::del *.PCBLIB /s
::del *.LibPkg /s	
::不允许删除集成库文件
::del *.LLBPKG /s
::del *.PrjPcbStructure /s	
::不允许删除工程结构文件
::del *.PRJPCBSTRUCTURE /s

exit			
::退出

::V0.01	
::新增History文件夹删除
::V0.02	
::新增__Previews文件夹删除
::V0.03	
::新增 .LOG文件删除
::V0.04	
::新增不允许删的文件
::V0.05 ::新增文件名大写(实际工作中，不同版本存在差异，有的版本文件名是全部大写，AD也能识别并且能正常打开)
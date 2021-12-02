@set img_type=1
@set run_img_header=8010000
@set run_img_pos=8010400
@set upd_img_pos=8010000
@set sec_img_header=8002000
@set sec_img_pos=8002400
@set wm_tool_cmd=%1
@set project_name=%2
@set secboot_bin=%3
%wm_tool_cmd% -b %project_name%.bin -o  %project_name% -it %img_type% -fc 0 -ra %run_img_pos% -ih %run_img_header% -ua %upd_img_pos% -nh 0  -un 0
%wm_tool_cmd% -b %secboot_bin% -o %project_name%_secboot -it 0 -fc 0 -ra %sec_img_pos% -ih %sec_img_header%-ua %upd_img_pos% -nh %run_img_header% -un 0
@type %project_name%_secboot.img %project_name%.img > %project_name%.fls
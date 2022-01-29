.PHONY: clean All

All:
	@echo "----------Building project:[ pthread_detached_th - Release ]----------"
	@cd "pthread_detached_th" && "$(MAKE)" -f  "pthread_detached_th.mk"
clean:
	@echo "----------Cleaning project:[ pthread_detached_th - Release ]----------"
	@cd "pthread_detached_th" && "$(MAKE)" -f  "pthread_detached_th.mk" clean
